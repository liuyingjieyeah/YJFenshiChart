//
//  ChartModel.h
//  YJFenshiChart
//
//  Created by liuyingjie on 2017/8/18.
//  Copyright © 2017年 liuyingjie. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Chart;

@interface ChartModel:NSObject

-(void)drawSerie:(id)chart serie:(NSMutableDictionary *)serie;
-(void)setValuesForYAxis:(id)chart serie:(NSDictionary *)serie;
-(void)setLabel:(id)chart label:(NSMutableArray *)label forSerie:(NSMutableDictionary *) serie;
-(void)drawTips:(id)chart serie:(NSMutableDictionary *)serie;

@end
