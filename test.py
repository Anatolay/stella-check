import os

suc = "examples/core/success"
fail = "examples/core/fail"

koka_opts = "--ccopts=\"-w\" --ccincdir=stella/syntax --cclinkopts=\"stella/syntax/Parser.o stella/syntax/Absyn.o stella/syntax/Lexer.o\""

def run_test(dir):
  print(dir)
  for filename in os.listdir(dir):
    print(filename)
    filepath = os.path.join(dir, filename)
    test_log_path = os.path.join("test", filepath)
    print(test_log_path)
    os.makedirs(os.path.join("test", dir), exist_ok=True)
    os.system(f"cat {filepath} | koka {koka_opts} -e stella/main.kk > {test_log_path}")

run_test(suc)
# run_test(fail)
