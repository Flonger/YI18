//
//  XFLAppDelegate.m
//  YI18
//
//  Created by 薛飞龙 on 14-7-5.
//  Copyright (c) 2014年 Flonger. All rights reserved.
//

#import "XFLAppDelegate.h"
#import "XFLRootViewController.h"
#import "XFLMyTabbar.h"
#import "BMKMapManager.h"
#import "XFLMyDB.h"
#import "BNCoreServices.h"
#import "BNaviSoundManager.h"


@implementation XFLAppDelegate
{
    UITabBarController * _tabBarController;
    BMKMapManager * _mapManager;
}
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent];
    _mapManager = [[BMKMapManager alloc] init];
    
    BOOL ret = [_mapManager start:@"cWG78bYeaKk7k9vVWzKbfgkt" generalDelegate:nil];
    if (!ret) {
        NSLog(@"地图加载失败");

    }
    [BNCoreServices_Instance initServices:@"cWG78bYeaKk7k9vVWzKbfgkt"];
    [BNCoreServices_Instance startServicesAsyn:nil fail:nil SoundService:[BNaviSoundManager getInstance]];
    
    [self createViewControllers];
    
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)createViewControllers
{
    //读取plist文件
    NSString * path = [NSString stringWithFormat:@"%@/viewControllers.plist",[[NSBundle mainBundle] resourcePath]];
    NSArray * plistArray = [[NSArray alloc] initWithContentsOfFile:path];
    
    //创建视图控制器
    NSMutableArray * vcArray = [[NSMutableArray alloc] init];
    for (NSDictionary * dict in plistArray) {
        NSString * name = [dict objectForKey:@"viewcontrollername"];
        XFLRootViewController * rvc = [[NSClassFromString(name) alloc] init];
        rvc.titleName = dict[@"title"];
        UINavigationController * nc = [[UINavigationController alloc] initWithRootViewController:rvc];
        [vcArray addObject:nc];
    }
    
    //实例化tabbar
    _tabBarController = [[UITabBarController alloc] init];
    _tabBarController.viewControllers = vcArray;
    self.window.rootViewController = _tabBarController;
    
    //自定义Tabbar
    NSString * tabbarPath = [NSString stringWithFormat:@"%@/TabBar.plist",[[NSBundle mainBundle] resourcePath]];
    NSArray * tabbarItem = [[NSArray alloc] initWithContentsOfFile:tabbarPath];
    
    XFLMyTabbar * myTabbar = [[XFLMyTabbar alloc] init];
    myTabbar.tag = 1;
    myTabbar.frame = CGRectMake(0, self.window.bounds.size.height-49, self.window.bounds.size.width, 49);
    [myTabbar createMyTabbarWithBgImageName:@"tabbarBg" andItemArray:tabbarItem andClass:self andSEL:@selector(tabbarClick:)];
    [_tabBarController.view addSubview:myTabbar];
    //默认选项
}
-(void)tabbarClick:(UIButton *)button
{
    //全部未选中
    for (UIView * view in button.superview.superview.subviews) {
        if (![view isKindOfClass:[UIImageView class]]) {
            UIButton * btn = [view.subviews objectAtIndex:0];
            UILabel * label = [view.subviews objectAtIndex:1];
            btn.selected = NO;
            label.textColor = [UIColor whiteColor];
        }
    }
    
    //变色
    button.selected = YES;
    UILabel * label = [button.superview.subviews objectAtIndex:1];
    label.textColor = [UIColor colorWithRed:0.30f green:1.00f blue:1.00f alpha:1.00f];
    
    //tabbar切换
    _tabBarController.selectedIndex = button.tag;
    
}




- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
