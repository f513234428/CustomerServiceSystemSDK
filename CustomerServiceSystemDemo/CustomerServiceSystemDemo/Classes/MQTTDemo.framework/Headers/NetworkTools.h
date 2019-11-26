//
//  MQTTNetwork.h
//  MQTTDemo
//
//  Created by QC on 2019/11/18.
//  Copyright © 2019 MQTT. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, RequestMethod)
{
    post,
    get
};

NS_ASSUME_NONNULL_BEGIN

@interface NetworkTools : NSObject

+ (instancetype)shareNetworkTools;
- (void)requestWithMethod:(RequestMethod)requestMethod andUrlString:(NSString *)urlString andParameters:(id) parameters andFinished:(void(^)(NSURLSessionDataTask *task,id response))successBlock andError:(void(^)(NSURLSessionDataTask *task,NSError *error))errorBlock;
- (void)getConfig ;//配置接口
- (void)setUser ;//新建账号
- (void)joinRoom ;//进入聊天
- (void)getIntelligent ;//智能问答
- (void)customerService ;//转人工客服
- (void)chatRecord ;//房间聊天记录查询
- (void)sendChat:(NSString *)chatStr withType:(NSString *)type;//聊天室发言 type-text|image|music|video

@end

NS_ASSUME_NONNULL_END
