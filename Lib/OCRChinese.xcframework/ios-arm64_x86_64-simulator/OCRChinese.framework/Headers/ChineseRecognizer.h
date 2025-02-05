//
//  ChineseRecognizer.h
//  OCRChinese
//
//  Created by Jenith Raja A, Mohamed on 18/11/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChineseRecognizer : NSObject

-(id)getTextRecognizer;
-(NSString *)getProcessImageResult:(UIImage*)image;

@end

NS_ASSUME_NONNULL_END
