/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSFileHandle.h>

@interface NSConcreteFileHandle : NSFileHandle
{
    int _fd;
    void *_nativeHandle;
    struct dispatch_data_s *_anchor;
    unsigned short _flags;
    struct dispatch_source_s *_dsrc;
    char _padding[2];
    struct __CFRunLoopSource *_source;
    struct __CFRunLoop *_rl;
    unsigned short _activity;
    char _padding2[2];
    int _error;
    void *_resultBytes;
    unsigned long _resultLength;
    int _resultSocket;
    struct dispatch_queue_s *_fhLock;
    long long _weakRefCount;
    id _readabilityHandler;
    id _writeabilityHandler;
    struct dispatch_source_s *_readMonitoringSource;
    struct dispatch_source_s *_writeMonitoringSource;
    struct dispatch_queue_s *_readMonitoringQueue;
    struct dispatch_queue_s *_writeMonitoringQueue;
}

- (void)setWriteabilityHandler:(id)arg1;
- (void)clearWriteabilityHandler;
- (id)writeabilityHandler;
- (void)setReadabilityHandler:(id)arg1;
- (void)clearReadabilityHandler;
- (id)readabilityHandler;
- (struct dispatch_source_s *)_monitor:(const struct dispatch_source_type_s *)arg1 source:(struct dispatch_source_s *)arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (void)waitForDataInBackgroundAndNotify;
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;
- (void)readInBackgroundAndNotify;
- (void)readInBackgroundAndNotifyForModes:(id)arg1;
- (void)performActivity:(int)arg1 modes:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)setPort:(id)arg1;
- (id)port;
- (void)closeFile;
- (void)_cancelDispatchSources;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (unsigned long long)seekToEndOfFile;
- (unsigned long long)offsetInFile;
- (void)writeData:(id)arg1;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(unsigned int)arg1;
- (unsigned int)readDataOfLength:(unsigned int)arg1 buffer:(char *)arg2;
- (id)availableData;
- (id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3;
- (id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3 error:(id *)arg4;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2;
- (id)init;
- (int)fileDescriptor;
- (void)lockedRelease;
- (id)lockedRetain;
- (oneway void)release;
- (id)retain;

@end

