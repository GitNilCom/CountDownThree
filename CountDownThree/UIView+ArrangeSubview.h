//
//  UIView+ArrangeSubview.h
//  CountDownThree
//
//  Created by Maker on 2020/5/20.
//  Copyright © 2020年 CE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Masonry.h"

@interface UIView (ArrangeSubview)
- (void)arrangeSubviewWithSpacingHorizontally:(NSArray*)views;
- (void)arrangeSubviewWithSpacingVertically:(NSArray*)views;
@end
