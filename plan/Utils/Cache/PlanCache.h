//
//  PlanCache.h
//  plan
//
//  Created by Fengzy on 15/8/29.
//  Copyright (c) 2015年 Fengzy. All rights reserved.
//

#import "Plan.h"
#import "Task.h"
#import "Photo.h"
#import "Settings.h"
#import "TaskRecord.h"
#import "Statistics.h"

@interface PlanCache : NSObject

+ (void)openDBWithAccount:(NSString *)account;

+ (void)storePersonalSettings:(Settings *)settings;

+ (BOOL)storePlan:(Plan *)plan;

+ (BOOL)storePhoto:(Photo *)photo;

+ (BOOL)storeStatistics:(Statistics *)statistics;

+ (BOOL)storeTask:(Task *)task;

+ (BOOL)storeTaskRecord:(TaskRecord *)taskRecord;

+ (BOOL)deletePlan:(Plan *)plan;

+ (BOOL)deletePhoto:(Photo *)photo;

+ (BOOL)deleteTask:(Task *)task;

+ (Settings *)getPersonalSettings;

+ (NSArray *)getPlanByPlantype:(NSString *)plantype;

+ (NSString *)getPlanTotalCountByPlantype:(NSString *)plantype;

+ (NSString *)getPlanCompletedCountByPlantype:(NSString *)plantype;

+ (NSArray *)getPhoto;

+ (NSArray *)getTeask;

+ (NSArray *)getTeaskRecord:(NSString *)recordId;

+ (NSString *)getPhotoTotalCount;

+ (NSString *)getTaskTotalCount;

+ (Photo *)getPhotoById:(NSString *)photoid;

+ (Statistics *)getStatistics;

+ (void)updateLocalNotification:(Plan *)plan;

+ (void)linkedLocalDataToAccount;

+ (NSArray *)getPlanForSync:(NSString *)syntime;

+ (Plan *)findPlan:(NSString *)account planid:(NSString *)planid;

//time:yyyy-MM-dd HH:mm:ss
+ (NSArray *)getPlanDateForStatisticsByTime:(NSString *)time;
@end
