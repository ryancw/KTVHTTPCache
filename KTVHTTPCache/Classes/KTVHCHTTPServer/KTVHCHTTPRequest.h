//
//  KTVHCHTTPRequest.h
//  KTVHTTPCache
//
//  Created by Single on 2017/8/10.
//  Copyright © 2017年 Single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CocoaHTTPServer/CocoaHTTPServer.h>

@class KTVHCDataRequest;

@interface KTVHCHTTPRequest : HTTPMessage

@property (nonatomic, copy) NSString * originalURLString;

@property (nonatomic, assign) BOOL isHeaderComplete;
@property (nonatomic, strong) NSDictionary * allHeaderFields;

@property (nonatomic, copy) NSURL * URL;
@property (nonatomic, copy) NSString * method;
@property (nonatomic, assign) NSInteger statusCode;

@property (nonatomic, copy) NSString * version;


- (KTVHCDataRequest *)dataRequest;

@end
