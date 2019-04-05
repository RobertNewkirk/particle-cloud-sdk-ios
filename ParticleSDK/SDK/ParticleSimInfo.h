//
// Created by Raimundas Sakalauskas on 2019-04-05.
// Copyright (c) 2019 Particle Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger, ParticleSimDetailedStatus) {
    ParticleSimDetailedStatusNeverActivated = 0,
    ParticleSimDetailedStatusActivate,
    ParticleSimDetailedStatusInactivateUserDeactivated,
    ParticleSimDetailedStatusInactiveDataLimitReached,
    ParticleSimDetailedStatusInactiveInvalidPayment
};

@interface ParticleSimInfo : NSObject

@property (nonatomic, readonly) int mbLimit;
@property (nonatomic, readonly) ParticleSimDetailedStatus status;

- (instancetype)initWithParams:(NSDictionary *)params;

@end

