# swiftdecoder-ios-chinese
Repository hosting xcframework for supporting korean language for OCR detection.

# OCRChinese-cocoapods

Add OCRChinese via Cocoapods:

- Create a podfile in the root of your project folder by running pod init command

- Add OCRChinese framework Podfile. For instance, add:

      pod 'OCRChinese', :git => 'https://github.com/Honeywell-IA/swiftdecoder-ios-swiftocr-chinese.git'


- If you want to install a specific version, you can do so by specifying the version explicitly. For instance:

            pod 'OCRChinese', :git => 'https://github.com/Honeywell-IA/swiftdecoder-ios-swiftocr-chinese.git', :tag => '6.2.3'
      
Note: Since this is a private repo, add your github credentials in keychain



# OCRChinese-swift-package-manager

Add OCRChinese via swift-package-manager:    

- To include the SDK in your Xcode project you have to add a Package Dependency in the project's settings section and in the tab "Package Dependencies".

- Add the url of this repository: https://github.com/Honeywell-IA/swiftdecoder-ios-swiftocr-chinese

- Once you have added the package, you should see SwiftDecoder added to your Package Dependencies in Xcode's Project Navigator

Note: Since this is a private repo, add your github credentials under Xcode settings -> accounts


# OCRChinese-ios-manual-integration

To install manually, please refer "Software Integration guide" under "Documentation" folder.

