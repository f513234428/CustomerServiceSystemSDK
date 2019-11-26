//
//  SpeedinessTools.h
//  MQTTDemo
//
//  Created by QC on 2019/11/20.
//  Copyright © 2019 MQTT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SpeedinessTools : NSObject
+ (instancetype)shareSpeedinessTools;
+(UIImage *)getLocalImage:(NSString *)imageName ;

@end

NS_ASSUME_NONNULL_END
