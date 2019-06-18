package org.unimodules.interfaces.updates;

import android.content.Context;

import java.util.Arrays;
import java.util.List;

import org.unimodules.core.ModuleRegistry;
import org.unimodules.core.ViewManager;
import org.unimodules.core.interfaces.ModuleRegistryConsumer;

public class UnimodulesUpdatesInterfaceViewManager extends ViewManager<UnimodulesUpdatesInterfaceView> implements ModuleRegistryConsumer {
  private static final String TAG = "ExpoUnimodulesUpdatesInterfaceView";

  private ModuleRegistry mModuleRegistry;

  @Override
  public String getName() {
    return TAG;
  }

  @Override
  public UnimodulesUpdatesInterfaceView createViewInstance(Context context) {
    return new UnimodulesUpdatesInterfaceView(context, mModuleRegistry);
  }

  @Override
  public ViewManagerType getViewManagerType() {
    return ViewManagerType.SIMPLE;
  }

  @Override
  public List<String> getExportedEventNames() {
    return Arrays.asList("onSomethingHappened");
  }

  @Override
  public void setModuleRegistry(ModuleRegistry moduleRegistry) {
    mModuleRegistry = moduleRegistry;
  }
}