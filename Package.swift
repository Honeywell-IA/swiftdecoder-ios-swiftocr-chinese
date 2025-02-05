// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "OCRChinese",
    platforms: [
         .iOS(.v12)
     ],
   products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "OCRChinese",
            targets: ["OCRChinese"]
            )
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "OCRChinese",
            path: "Lib/OCRChinese.xcframework")
    ]
)

