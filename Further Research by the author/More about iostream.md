iostream is a class. It's consists of istream and ostream.
iostream has four objects -

1. cin(for taking input from the user)
2. cout(for displaying output on the screen)
3. cerr(for error logging but unbuffered)
4. clog(for error logging but buffered)

cerr: cerr is unbuffered error logging. This means each insertion to cerr will be immidietly flushed to the OS.
clog: clog is buffered error logging. This means each insertion to clog could cause hold the output until the buffer is filled or flushed.

conclusion:
clog is for non-critical programs as it is buffered and cerr is for critical programs as it is unbuffered.
