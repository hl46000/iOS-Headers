/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "PTSImageLoaderDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class NSMutableArray, PTSImageLoader, UIImagePickerController, UIPopoverController;

@interface PTSImagePickerViewController : UITableViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PTSImageLoaderDelegate, UIPopoverControllerDelegate>
{
    UIImagePickerController *_photoLibraryPicker;
    NSMutableArray *_images;
    NSMutableArray *_filenames;
    PTSImageLoader *_imageLoader;
    _Bool _doneLoading;
    id _completion;
    UIPopoverController *_popoverController;
    _Bool _includePhotoLibrary;
}

@property(nonatomic) _Bool includePhotoLibrary; // @synthesize includePhotoLibrary=_includePhotoLibrary;
- (void).cxx_destruct;
- (void)imageLoaderDidFinishLoadingImages:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forFilename:(id)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithResourcePath:(id)arg1 completion:(id)arg2;

@end
