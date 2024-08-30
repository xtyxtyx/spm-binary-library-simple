// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "BinaryLibraryDemo",
    targets: [
        .executableTarget(
            name: "BinaryLibraryDemo",
            dependencies: [
                .target(name: "libfib")
            ]
        ),
        .binaryTarget(
            name: "libfib", path: "libfib.artifactbundle"
        ),
    ]
)
