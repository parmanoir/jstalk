//
//  JSTFileWatcher.h
//  jstalk
//
//  Created by August Mueller on 3/15/09.
//  Copyright 2009 Flying Meat Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface JSTFileWatcher : NSObject {
    id _delegate;
    NSString *_path;
    FSEventStreamRef streamRef;
}


@property (assign) id delegate;
@property (retain) NSString *path;

+ (id) fileWatcherWithPath:(NSString*)filePath delegate:(id)delegate;

@end


@interface NSObject (JSTFileWatcherDelegate)
- (void) fileWatcherDidRecieveFSEvent:(JSTFileWatcher*)fw;
@end
