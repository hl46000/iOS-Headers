/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AVOutputSettingsAssistantInternal : NSObject
{
    id <AVOutputSettingsAssistantBaseSettingsProvider> baseSettingsProvider;
    id <AVOutputSettingsAssistantVideoSettingsAdjuster> videoSettingsAdjuster;
    struct opaqueCMFormatDescription *sourceVideoFormat;
    struct opaqueCMFormatDescription *sourceAudioFormat;
    CDStruct_1b6d18a9 sourceVideoAverageFrameDuration;
    CDStruct_1b6d18a9 sourceVideoMinFrameDuration;
}

@end
