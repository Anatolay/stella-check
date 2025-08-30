# Stella-check

Typechecker for the Stella programming language.

## Development

...

Note: Koka language server support is not smart enough to handle modules like `syntax/ast` within a `src` folder. In such cases it expects the module name to be `src/syntax/ast`. A workaround is to run VSCode directly from the `src` folder, but that is quite unpleasant. Instead, we rename `src` to `stella` to at least keep module names nicer.

### Build

```
koka --ccincdir=stella/syntax --cclinkopts="stella/syntax/Parser.o stella/syntax/Absyn.o stella/syntax/Lexer.o" -o EXECUTABLE stella/main.kk 
```

### Update grammar

...

```sh
bnfc --koka -o stella/syntax/ -p stella/syntax -m stella/syntax/Syntax.cf
cd stella/syntax/
make
rm *.bak
```
