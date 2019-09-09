
set nomodeline

fun! File2HTML(file_in, file_type, file_out)

	" based on define_all.vim from Text::VimColor
	hi Boolean         ctermfg=7
	hi Character       ctermfg=7
	hi Comment         ctermfg=7
	hi Conditional     ctermfg=7
	hi Constant        ctermfg=7
	hi Debug           ctermfg=7
	hi Define          ctermfg=7
	hi Delimiter       ctermfg=7
	hi DiffAdd         ctermfg=7
	hi DiffChange      ctermfg=7
	hi DiffDelete      ctermfg=7
	hi DiffText        ctermfg=7
	hi Error           ctermfg=7
	hi Exception       ctermfg=7
	hi Float           ctermfg=7
	hi Function        ctermfg=7
	hi Identifier      ctermfg=7
	hi Ignore          ctermfg=7
	hi Include         ctermfg=7
	hi Keyword         ctermfg=7
	hi Label           ctermfg=7
	hi Macro           ctermfg=7
	hi Normal          ctermfg=7
	hi Number          ctermfg=7
	hi Operator        ctermfg=7
	hi PreCondit       ctermfg=7
	hi PreProc         ctermfg=7
	hi Repeat          ctermfg=7
	hi Special         ctermfg=7
	hi SpecialChar     ctermfg=7
	hi SpecialComment  ctermfg=7
	hi SpecialKey      ctermfg=7
	hi Statement       ctermfg=7
	hi StorageClass    ctermfg=7
	hi String          ctermfg=7
	hi Structure       ctermfg=7
	hi Tag             ctermfg=7
	hi Todo            ctermfg=7
	hi Type            ctermfg=7
	hi Typedef         ctermfg=7
	hi Underlined      ctermfg=7
	" EOF define_all.vim

	let b:is_bash=1

	filetype on
	exec 'edit' a:file_in
	exec 'set' 'filetype='.a:file_type

	" based on mark.vim from Text::VimColor

	" mark.vim -> HTML
	"
	" mark.vim - turn Vim syntax highlighting into an ad-hoc markup language that
	" can be parsed by the Text::VimColor Perl module.
	"
	" Author: Geoff Richards <qef@laxan.com>
	" Maintainer: Randy Stauner <rwstauner@cpan.org>
	" Based loosely on 2html.vim, by Bram Moolenaar <Bram@vim.org>,
	"   modified by David Ne\v{c}as (Yeti) <yeti@physics.muni.cz>.
	"
	" vim versions/features (see :help version[567])
	" 5.2 - setline(), --version
	" 5.4 - &filetype
	" 6.0 - :wincmd, --cmd, -X
	" 7.0 - lists ([], add())

	set report=1000000

	" For some reason (I'm sure it used to work) we now need to get Vim
	" to make another attempt to detect the filetype if it wasn't set
	" explicitly.
	if !strlen(&filetype)
		filetype detect
	endif
	syn on

	" Set up the output buffer.
	new
	set modifiable
	set paste

	" Expand tabs. Without this they come out as '^I'.
	set isprint+=9

	wincmd p

	" Loop over all lines in the original text
	let s:end = line("$")
	let s:lnum = 1
	while s:lnum <= s:end

		" Get the current line
		let s:line = getline(s:lnum)
		let s:len = strlen(s:line)
		let s:new = ""

		" Loop over each character in the line
		let s:col = 1
		while s:col <= s:len
			let s:startcol = s:col " The start column for processing text
			let s:id = synID(s:lnum, s:col, 1)
			let s:idt = synIDtrans(s:id)
			let s:col = s:col + 1
			" Speed loop (it's small - that's the trick)
			" Go along till we find a change in synID
			while s:col <= s:len && s:idt == synIDtrans(synID(s:lnum, s:col, 1))
				let s:col = s:col + 1
			endwhile

			" Output the text with the same synID, with class set to c{s:id}
			let s:name = synIDattr(s:idt, 'name')
			if s:name == ''
				" no <span>
				let s:new = s:new . substitute(substitute(substitute(strpart(s:line, s:startcol - 1, s:col - s:startcol), '&', '\&amp;', 'g'), '<', '\&lt;', 'g'), '>', '\&gt;', 'g')
			else
				let s:new = s:new . '<span class="' . s:name . '">' . substitute(substitute(substitute(strpart(s:line, s:startcol - 1, s:col - s:startcol), '&', '\&amp;', 'g'), '<', '\&lt;', 'g'), '>', '\&gt;', 'g') . '</span>'
			endif

			if s:col > s:len
				break
			endif
		endwhile

		exe "normal \<C-W>pa" . strtrans(s:new) . "\n\e\<C-W>p"
		let s:lnum = s:lnum + 1
		+
	endwhile

	wincmd p
	normal dd

	" EOF mark.vim

	exec 'write!' a:file_out
	qall!

endfun
