//
//  UdeskContentController.h
//  UdeskSDK
//
//  Created by Udesk on 15/11/26.
//  Copyright (c) 2015年 Udesk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface UdeskContentController : UIViewController<WKNavigationDelegate>

/**
 *  文章ID
 */
@property (nonatomic, strong  ) NSString   *articleId;
/**
 *  文章标题
 */
@property (nonatomic, strong  ) NSString   *articlesTitle;

- (void)dismissChatViewController;

@end
