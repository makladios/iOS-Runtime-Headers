/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PUAirplayRoute, PUAirplayRouteTableViewDataSource;

@interface PUAirplayRoutePickerViewController : UITableViewController {
    id _completionHandler;
    PUAirplayRouteTableViewDataSource *_dataSource;
    BOOL _makeRouteCurrentBeforeReturning;
    PUAirplayRoute *_markedRoute;
    BOOL _shouldShowDoneButton;
}

@property(copy) id completionHandler;
@property BOOL makeRouteCurrentBeforeReturning;
@property BOOL shouldShowDoneButton;

- (void).cxx_destruct;
- (void)_doneAction:(id)arg1;
- (void)_updateRoutes;
- (void)_userSelectedRoute:(id)arg1 fromTableView:(id)arg2 atIndexPath:(id)arg3;
- (id)completionHandler;
- (id)init;
- (BOOL)makeRouteCurrentBeforeReturning;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setMakeRouteCurrentBeforeReturning:(BOOL)arg1;
- (void)setMarkedRoute:(id)arg1;
- (void)setShouldShowDoneButton:(BOOL)arg1;
- (BOOL)shouldShowDoneButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
