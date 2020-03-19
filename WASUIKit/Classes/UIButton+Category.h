//
//  UIButton+category.h
//  GoDap
//
//  Created by Tory on 19/9/18.
//  Copyright © 2018年 dingtone. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 设置标题的样式
 */
typedef NS_ENUM(NSUInteger, WASButtonImagePostion){
    //标题的位置
    WASButtonImagePostion_Top = 1,       // 标题的位置在上;
    WASButtonImagePostion_Left,         // 标题的位置在下;
    WASButtonImagePostion_Right,          // 标题的位置在左;
    WASButtonImagePostion_Bottom,         // 标题的位置在右;
};

@interface UIButton (category)

- (void)was_setImagePosition:(WASButtonImagePostion)position Space:(CGFloat)spacing;

@end
