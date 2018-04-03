#/bin/bash

cmake . -Bbuild
(cd build && make && ./libs)

