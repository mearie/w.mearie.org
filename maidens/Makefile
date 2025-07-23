PAGES=1 2 3 4 5 6 7 8 9 guide extra guide-letter prompts

.PHONY: all
all: $(PAGES:%=%.html) $(PAGES:%=en/%.html)

%.html: %.md template.html.inc
	pandoc.exe -f markdown+smart -s $< -o $@ --template=template.html.inc

