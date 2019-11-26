//
//  CSSManualController.h
//  MQTT Test
//
//  Created by QC on 2019/11/8.
//  Copyright © 2019 AVPlayerTest. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CSSManualController : UIViewController
@property (assign,nonatomic) BOOL isComeFromIntelligent;
@property (strong,nonatomic) NSString * titleStr;
@property (strong,nonatomic) NSString * app_key;
@property (strong,nonatomic) NSString * app_secret;
@property (strong,nonatomic) NSString * username;
@property (strong,nonatomic) NSString * mainLocalIP;
@property (strong,nonatomic) NSString * MQTTHost;
@end

NS_ASSUME_NONNULL_END
