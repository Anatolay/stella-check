# Stella-check

Typechecker for the Stella programming language.

## Development

The code is developed with the [Koka](https://koka-lang.github.io/koka/doc/book.html) v3.2.2 and a [custom](https://github.com/Anatolay/bnfc-koka) version of the [BNFC](https://github.com/BNFC/bnfc) tool.

Note: Koka language server support is not smart enough to handle modules like `syntax/ast` within a `src` folder. In such cases it expects the module name to be `src/syntax/ast`. A workaround is to run VSCode directly from the `src` folder, but that is quite unpleasant. Instead, we rename `src` to `stella` to at least keep module names nicer.

#### Run main
```
koka --ccincdir=stella/syntax --cclinkopts="stella/syntax/Parser.o stella/syntax/Absyn.o stella/syntax/Lexer.o" -e stella/main.kk
```
e.g.
```
cat FILEPATH | koka --ccincdir=stella/syntax --cclinkopts="stella/syntax/Parser.o stella/syntax/Absyn.o stella/syntax/Lexer.o" -e stella/main.kk
```


### Build

```
koka --ccincdir=stella/syntax --cclinkopts="stella/syntax/Parser.o stella/syntax/Absyn.o stella/syntax/Lexer.o" -o EXECUTABLE stella/main.kk 
```

### Test

```sh
# run all tests
koka --ccincdir=stella/syntax --cclinkopts="stella/syntax/Parser.o stella/syntax/Absyn.o stella/syntax/Lexer.o" -e test/test.kk

# you can also run either modal or core tests
koka --ccincdir=stella/syntax --cclinkopts="stella/syntax/Parser.o stella/syntax/Absyn.o stella/syntax/Lexer.o" -e test/test.kk -- vanilla
koka --ccincdir=stella/syntax --cclinkopts="stella/syntax/Parser.o stella/syntax/Absyn.o stella/syntax/Lexer.o" -e test/test.kk -- modal
```

### Update grammar

You will need to build the [custom](https://github.com/Anatolay/bnfc-koka) version of BNFC with Koka support.

```sh
bnfc --koka -o stella/syntax/ -p stella/syntax -m stella/syntax/Syntax.cf
cd stella/syntax/
make
rm *.bak
```

## Troubleshooting

- Error when updating grammar:
  ```
  bnfc: stella/syntax/Syntax.cf: hGetContents: invalid argument (cannot decode byte sequence starting from ...
  ```
  Solution:
  ```sh
  export LANG=C.UTF-8
  ```
