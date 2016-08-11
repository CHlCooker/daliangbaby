//
//  RAHTTPProtocol
//
//  Created by xieweizhi on 15/12/30.
//

#import <Foundation/Foundation.h>

#define kSQLitePassword @"networkeye"
#define kSaveRequestMaxCount 300
//@protocol RAHTTPProtocolDelegate;

//! 监控所有HTTP/HTTPS的网络请求(包括webview的请求)
@interface RAHTTPProtocol : NSURLProtocol

/**
 *  open or close HTTP/HTTPS monitor
 *
 *  @param enabled
 */
+ (void)setEnabled:(BOOL)enabled;

/**
 *  display HTTP/HTTPS monitor state
 *
 *  @return HTTP/HTTPS monitor state
 */
+ (BOOL)isEnabled;
//+ (void)setDelegate:(id<RAHTTPProtocolDelegate>)newValue;



@end

