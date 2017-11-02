//
//  BMDPedometer.h
//  BMDPedometer
//
//  Created by Matheus Mariano on 17/08/16.
//  Copyright © 2016 Matheus Mariano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface BMDPedometer : RCTEventEmitter <RCTBridgeModule>
@property (nonatomic, readonly) CMPedometer *pedometer;
@end
