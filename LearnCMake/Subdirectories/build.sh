#/bin/bash

cmake . -Bbuild
(cd build && make && ./helloworld/libs)

