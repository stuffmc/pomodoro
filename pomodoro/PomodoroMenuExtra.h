//
//  PomodoroMenuExtra.h
//  pomodoro
//
//  Created by Ugo Landini on 06/09/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SystemUIPlugin.h"

@class PomodoroMenuExtraView;

@interface PomodoroMenuExtra : NSMenuExtra {

	NSMenu *theMenu;
	PomodoroMenuExtraView *theView;
	
}

@end
