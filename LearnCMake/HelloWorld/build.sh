#/bin/bash

cmake . -Bbuild
(cd build && make && ./hello_world)

