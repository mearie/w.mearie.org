.PHONY: all
all: 1.html 2.html 3.html 4.html 5.html 6.html 7.html 8.html 9.html guide.html extra.html guide-letter.html prompts.html

%.md: %.html
	pandoc -f markdown+smart -s $@ -o $< --template=template.html.inc

