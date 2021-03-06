//
//  NameScene.h
//  Hangman
//
//  Created by Clawoo on 1/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface NameScene : CCLayer {
	CCLabelAtlas *nameLabel_;
	
	NSArray *keyboardLines_;
	NSMutableString *name_;
}

+ (id)scene;
- (CCMenuItem *)itemForAtRow:(NSInteger)row column:(NSInteger)column;

@end
