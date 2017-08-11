//
//  KTVHCHTTPResponse.h
//  KTVHTTPCache
//
//  Created by Single on 2017/8/10.
//  Copyright © 2017年 Single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CocoaHTTPServer/CocoaHTTPServer.h>

@class KTVHCHTTPConnection;
@class KTVHCDataRequest;

@interface KTVHCHTTPResponse : NSObject <HTTPResponse>

+ (instancetype)responseWithConnection:(KTVHCHTTPConnection *)connection dataRequest:(KTVHCDataRequest *)dataRequest;

@end
