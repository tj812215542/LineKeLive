//
//  LKMainTopView.h
//  LinekeLive
//
//  Created by CODER_TJ on 2017/6/24.
//  Copyright © 2017年 CODER_TJ. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^DidFinishedBlock)(NSInteger index);

@interface LKSegmentItemBar : UIView

- (instancetype)initWithFrame:(CGRect)frame segmentItems:(NSArray *)items;

- (void)scrolling:(NSInteger)index;

/** 点击菜单标题的回调 */
@property (nonatomic, copy) DidFinishedBlock didFinishedBlock;

/** 菜单栏主题颜色设置(默认白色) */
@property (nonatomic, strong) UIColor *tintColor;

@end
