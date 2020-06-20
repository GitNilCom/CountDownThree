//
//  CountDownCell.h
//  CountDownThree
//
//  Created by Maker on 2020/5/20.
//  Copyright © 2020年 CE. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CountDownCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *titleIV;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *countDownLabel;

@end
