//
//  Section.h
//  YJFenshiChart
//
//  Created by liuyingjie on 2017/8/18.
//  Copyright © 2017年 liuyingjie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YAxis.h"

@interface Section : NSObject {
    bool hidden;
    bool isInitialized;
    bool paging;
    int  selectedIndex;
    CGRect frame;
    float paddingLeft;
    float paddingRight;
    float paddingTop;
    float paddingBottom;
    NSMutableArray *padding;
    NSMutableArray *series;
    NSMutableArray *yAxises;
    NSMutableArray *xAxises;
}

@property(nonatomic) bool   hidden;
@property(nonatomic) bool   isInitialized;
@property(nonatomic) bool   paging;
@property(nonatomic) int    selectedIndex;
@property(nonatomic) CGRect frame;
@property(nonatomic) float  paddingLeft;
@property(nonatomic) float  paddingRight;
@property(nonatomic) float  paddingTop;
@property(nonatomic) float  paddingBottom;
@property(nonatomic,retain) NSMutableArray *padding;
@property(nonatomic,retain) NSMutableArray *series;
@property (nonatomic,retain) NSMutableArray *yAxises;
@property (nonatomic,retain) NSMutableArray *xAxises;

-(void)addYAxis:(int)pos;
-(void)removeYAxis:(int)index;
-(void)addYAxises:(int)num at:(int)pos;
-(void)removeYAxises;
-(void)initYAxises;
-(void)nextPage;

@end

