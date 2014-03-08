//
//  BLBackGroundLayer.h
//  GamePlay
//
//  Created by Bennett Lee on 2/21/14.
//  Copyright 2014 Bennett Lee. All rights reserved.
//

#import "cocos2d.h"
#import "MSBGLayer.h"

@interface MSMountainBGLayer : MSBGLayer

-(void) update:(ccTime)dt;
-(void) spawnFrontCloud;
-(void) spawnBackCloud;

@end
