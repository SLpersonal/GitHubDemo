//
//  TimerLabel.h
//  TimerDemo
//
//  Created by Levi on 2017/3/29.
//  Copyright © 2017年 SL. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CountdownTimerLabel;

@protocol TimerLabelDelegate <NSObject>

@optional

-(void)timerContinuesToRunLabel:(UILabel * )label time:(NSString *)time;    //定时器继续运行
-(void)timerCountdownIsCompleteLabel:(UILabel * )label timer:(NSString *)time;   //定时器结束

@end

@interface TimerLabel : UILabel

@property (weak,  nonatomic) id<TimerLabelDelegate> delegate;

//用于定时器UI显示
@property (strong,nonatomic) UILabel * timeLabel;

//定时器运行状态
@property (assign, readonly)  BOOL timerRun;

-(instancetype)initWithLabel:(UILabel*)theLabel;

-(void)startTimer;
-(void)stopTimer;

//设置倒计时时间
-(void)setCountDownTime:(NSTimeInterval)time;

@end
