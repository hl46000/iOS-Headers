/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface GEODirectionsProblem : PBCodable <NSCopying>
{
    unsigned long long _problematicEventIndex;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_events;
    NSData *_overviewScreenshotImageData;
    unsigned int _problematicResponseIndex;
    NSData *_problematicRouteID;
    unsigned int _problematicStepIndex;
    CDStruct_d18ab72a _has;
}

@property(nonatomic) unsigned long long problematicEventIndex; // @synthesize problematicEventIndex=_problematicEventIndex;
@property(nonatomic) unsigned int problematicStepIndex; // @synthesize problematicStepIndex=_problematicStepIndex;
@property(retain, nonatomic) NSData *problematicRouteID; // @synthesize problematicRouteID=_problematicRouteID;
@property(nonatomic) unsigned int problematicResponseIndex; // @synthesize problematicResponseIndex=_problematicResponseIndex;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSData *overviewScreenshotImageData; // @synthesize overviewScreenshotImageData=_overviewScreenshotImageData;
@property(retain, nonatomic) NSMutableArray *directionsResponses; // @synthesize directionsResponses=_directionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsRequests; // @synthesize directionsRequests=_directionsRequests;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasProblematicEventIndex;
@property(nonatomic) _Bool hasProblematicStepIndex;
@property(readonly, nonatomic) _Bool hasProblematicRouteID;
@property(nonatomic) _Bool hasProblematicResponseIndex;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
@property(readonly, nonatomic) _Bool hasOverviewScreenshotImageData;
- (id)directionsResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)addDirectionsResponses:(id)arg1;
- (void)clearDirectionsResponses;
- (id)directionsRequestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsRequestsCount;
- (void)addDirectionsRequests:(id)arg1;
- (void)clearDirectionsRequests;
- (void)dealloc;

@end
