This repository demonstrates how to use swift-package-manager to build a project that depends on a library artifactbundle.

## Usage

1. Clone and build the modified swift-package-manager with support for library artifactbundle:

```sh
git clone https://github.com/xtyxtyx/swift-package-manager.git
cd swift-package-manager
swift build
```

After building, the `swift-build` executable will be located at `.build/debug/swift-build`.

2. Clone and build the example project:

```sh
git clone https://github.com/xtyxtyx/spm-binary-library-simple.git
cd spm-binary-library-simple
../swift-package-manager/.build/debug/swift-build  # This is the swift-build executable built in step 1
```

If everything goes well, you should see the following output:

```sh
Building for debugging...
ld: warning: object file (/Users/mac/code/spm-binary-library-simple/.build/arm64-apple-macosx/debug/libtest.a[2](libtest.o)) was built for newer 'macOS' version (15.0) than being linked (11.0)
[9/9] Applying BinaryLibraryDemo
Build complete! (0.59s)
```

And then you can run the executable:

```sh
.build/debug/BinaryLibraryDemo
```