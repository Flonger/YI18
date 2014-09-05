//
//  XFLRootViewController.h
//  YI18
//
//  Created by 薛飞龙 on 14-7-5.
//  Copyright (c) 2014年 Flonger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "XFLDownLoad.h"
#import "XFLDownLoadManager.h"
#import "port.h"
#import "UIImageView+WebCache.h"
#import "UIButton+WebCache.h"
#import "XFLMyDB.h"
#import "ProgressHUD.h"
#import "UIView+XFLTransitionAnimation.h"

@interface XFLRootViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property (nonatomic, strong) NSString * titleName;




@end
