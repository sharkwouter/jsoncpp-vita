# jsoncpp vita

Jsoncpp is a library for working with json in C++ which is very convenient to use. This is an attempt at bringing it to the Vita with a VITABUILD and an example. Currently it doesn't work, but I'm not sure why.

## Testing

To test this, first build the library. Open a terminal in the ``jsoncpp`` directory and run:
```
vita-makepkg -i
```

Then in the ``hello-json`` directory run the following to build the ``.vpk`` for the example:
```
mkdir build && cd build
cmake ..
make
```

The ``.vpk`` will be created in ``hello-json/build``. Please let me know if it works for you or if you know how to get it working.

## License

This is based on sample code for the vitasdk.

All code and build scripts in this repo is licensed under the terms of [CC0 1.0 Universal](https://creativecommons.org/publicdomain/zero/1.0/).
