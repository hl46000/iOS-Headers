/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GEOTileRequester.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSURLConnection;

@interface GMMGeoTileRequester : GEOTileRequester <NSURLConnectionDelegate>
{
    NSURLConnection *_conn;
    NSMutableData *_data;
    BOOL _readPreamble;
    BOOL _readTileHeader;
    int _lastGoodOffset;
    unsigned short _numTilesToRead;
    unsigned short _numTilesRead;
    unsigned int _tileEdition;
    unsigned int _tilesLoaded;
}

+ (id)hostname;
+ (unsigned char)tileProviderIdentifier;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)_tryReadTiles;
- (void)_tryReadPreamble;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_cancelWithErrorCode:(int)arg1;
- (void)_failWithErrorCode:(int)arg1;
- (void)_failWithError:(id)arg1;
- (void)cancel;
- (void)_cleanup;
- (void)start;

@end
