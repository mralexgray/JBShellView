//
//  JBAppDelegate.h
//  JBShellView
//
//  Created by Jason Brennan on 2012-11-29.
//  Copyright (c) 2012 Jason Brennan. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class JBShellContainerView;
@interface JBAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (nonatomic, strong) JBShellContainerView *shellContainer;
@end
