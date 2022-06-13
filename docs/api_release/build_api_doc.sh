#! /bin/bash

# delete cache data of xml.
rm build -rf
rm docs/build -rf

mkdir -p build
pushd build
  cmake .. && make
popd

# release html
#pushd build/docs
#  tar vcf sphinx.tar sphinx
#  mv sphinx.tar ../../
#popd

