//
//  ViewController.h
//  简单朋友圈展示
//
//  Created by 闫继祥 on 2019/7/17.
//  Copyright © 2019 闫继祥. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSSIntelligentController : UIViewController
@property (strong,nonatomic) NSString * titleStr;
@property (strong,nonatomic) NSString * app_key;
@property (strong,nonatomic) NSString * app_secret;
@property (strong,nonatomic) NSString * username;
@property (strong,nonatomic) NSString * mainLocalIP;
@property (strong,nonatomic) NSString * MQTTHost;

@end

