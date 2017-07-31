//
//  VCNormalRequest.h
//  VCreditNetworkDemo
//
//  Created by SkyHarute on 2017/7/31.
//  Copyright © 2017年 SkyHarute. All rights reserved.
//

#import "VCBaseRequest.h"

@interface VCNormalRequest : VCBaseRequest

//typedef void(^successBlock)(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject);
//typedef void(^failureBlock)(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error);

/**
 post
 */
- (void)postWithClass:(Class)classObj Completion:(void (^)(id))completion exceptions:(void (^)(id))exceptions error:(void (^)(NSError *))failure;
@end
