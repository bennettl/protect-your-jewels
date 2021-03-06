//
//  PYJUILayer.h
//  GamePlay
//
//  Created by Bennett Lee on 2/21/14.
//  Copyright (c) 2014 ITP382RBBM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface PYJUILayer : CCLayer

+(id)nodeWithIsClassic:(BOOL)classic;
- (void)updateLivesLabelWithLives:(int)lives;
- (void)updateScoreLabelWithScore:(int)score;
-(void)endTimer;
-(int)getTime;

@end
