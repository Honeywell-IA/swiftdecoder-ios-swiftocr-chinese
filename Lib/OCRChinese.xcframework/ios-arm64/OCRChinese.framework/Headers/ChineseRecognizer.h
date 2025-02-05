//
//  ChineseRecognizer.h
//  OCRChinese
//
//  Created by Jenith Raja A, Mohamed on 18/11/24.
//

#import <Foundation/Foundation.h>
#import <MLKitTextRecognitionChinese/MLKitTextRecognitionChinese.h>
#import <MLKitTextRecognitionCommon/MLKTextRecognizer.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChineseRecognizer : NSObject

-(MLKTextRecognizer *)getTextRecognizer;
-(NSString *)getProcessImageResult:(UIImage*)image;

@end

NS_ASSUME_NONNULL_END
