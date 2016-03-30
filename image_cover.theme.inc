<?php
/**
 *
 */
function theme_image_cover($variables) {
  $path = $variables['path'];

  return '<div class="image cover '.$variables['anchor'].'" style="background-image: url('.$path.')"></div>';
}
